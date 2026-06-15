// fichero 41049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41049;

Registro41049 crear_registro41049(int id) {
    Registro41049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
