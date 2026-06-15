// fichero 35713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35713;

Registro35713 crear_registro35713(int id) {
    Registro35713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
