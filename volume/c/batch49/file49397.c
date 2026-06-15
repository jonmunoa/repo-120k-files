// fichero 49397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49397;

Registro49397 crear_registro49397(int id) {
    Registro49397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
