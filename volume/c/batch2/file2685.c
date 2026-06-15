// fichero 2685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2685;

Registro2685 crear_registro2685(int id) {
    Registro2685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
