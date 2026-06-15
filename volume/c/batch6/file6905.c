// fichero 6905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6905;

Registro6905 crear_registro6905(int id) {
    Registro6905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
