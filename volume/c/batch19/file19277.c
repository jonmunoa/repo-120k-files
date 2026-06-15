// fichero 19277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19277;

Registro19277 crear_registro19277(int id) {
    Registro19277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
