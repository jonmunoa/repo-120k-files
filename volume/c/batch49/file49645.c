// fichero 49645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49645;

Registro49645 crear_registro49645(int id) {
    Registro49645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
