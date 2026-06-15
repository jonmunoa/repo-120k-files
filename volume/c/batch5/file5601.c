// fichero 5601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5601;

Registro5601 crear_registro5601(int id) {
    Registro5601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
