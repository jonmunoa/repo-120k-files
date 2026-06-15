// fichero 2777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2777;

Registro2777 crear_registro2777(int id) {
    Registro2777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
