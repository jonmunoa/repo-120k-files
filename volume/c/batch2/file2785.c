// fichero 2785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2785;

Registro2785 crear_registro2785(int id) {
    Registro2785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
