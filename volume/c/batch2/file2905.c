// fichero 2905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2905;

Registro2905 crear_registro2905(int id) {
    Registro2905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
