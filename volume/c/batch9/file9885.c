// fichero 9885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9885;

Registro9885 crear_registro9885(int id) {
    Registro9885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
