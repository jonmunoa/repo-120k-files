// fichero 26693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26693;

Registro26693 crear_registro26693(int id) {
    Registro26693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
