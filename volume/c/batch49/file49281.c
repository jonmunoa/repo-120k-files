// fichero 49281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49281;

Registro49281 crear_registro49281(int id) {
    Registro49281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
