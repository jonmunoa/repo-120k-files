// fichero 26301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26301;

Registro26301 crear_registro26301(int id) {
    Registro26301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
