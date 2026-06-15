// fichero 36565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36565;

Registro36565 crear_registro36565(int id) {
    Registro36565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
