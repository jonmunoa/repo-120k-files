// fichero 36425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36425;

Registro36425 crear_registro36425(int id) {
    Registro36425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
