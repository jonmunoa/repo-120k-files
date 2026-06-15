// fichero 36049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36049;

Registro36049 crear_registro36049(int id) {
    Registro36049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
