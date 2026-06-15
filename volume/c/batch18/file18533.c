// fichero 18533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18533;

Registro18533 crear_registro18533(int id) {
    Registro18533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
