// fichero 20565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20565;

Registro20565 crear_registro20565(int id) {
    Registro20565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
