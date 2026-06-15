// fichero 11873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11873;

Registro11873 crear_registro11873(int id) {
    Registro11873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
