// fichero 49697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49697;

Registro49697 crear_registro49697(int id) {
    Registro49697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
