// fichero 30713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30713;

Registro30713 crear_registro30713(int id) {
    Registro30713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
