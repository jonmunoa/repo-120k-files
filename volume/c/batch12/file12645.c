// fichero 12645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12645;

Registro12645 crear_registro12645(int id) {
    Registro12645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
