// fichero 2505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2505;

Registro2505 crear_registro2505(int id) {
    Registro2505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
