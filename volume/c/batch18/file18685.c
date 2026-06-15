// fichero 18685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18685;

Registro18685 crear_registro18685(int id) {
    Registro18685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
