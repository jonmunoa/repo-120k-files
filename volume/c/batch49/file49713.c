// fichero 49713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49713;

Registro49713 crear_registro49713(int id) {
    Registro49713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
