// fichero 2753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2753;

Registro2753 crear_registro2753(int id) {
    Registro2753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
