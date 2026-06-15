// fichero 20033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20033;

Registro20033 crear_registro20033(int id) {
    Registro20033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
