// fichero 2849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2849;

Registro2849 crear_registro2849(int id) {
    Registro2849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
