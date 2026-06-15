// fichero 23121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23121;

Registro23121 crear_registro23121(int id) {
    Registro23121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
