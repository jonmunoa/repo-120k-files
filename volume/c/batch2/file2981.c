// fichero 2981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2981;

Registro2981 crear_registro2981(int id) {
    Registro2981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
