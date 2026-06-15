// fichero 3565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3565;

Registro3565 crear_registro3565(int id) {
    Registro3565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
