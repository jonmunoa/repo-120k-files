// fichero 46501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46501;

Registro46501 crear_registro46501(int id) {
    Registro46501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
