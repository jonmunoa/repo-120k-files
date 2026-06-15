// fichero 18449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18449;

Registro18449 crear_registro18449(int id) {
    Registro18449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
