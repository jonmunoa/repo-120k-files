// fichero 18425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18425;

Registro18425 crear_registro18425(int id) {
    Registro18425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
