// fichero 23673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23673;

Registro23673 crear_registro23673(int id) {
    Registro23673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
