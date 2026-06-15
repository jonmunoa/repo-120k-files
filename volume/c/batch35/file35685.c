// fichero 35685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35685;

Registro35685 crear_registro35685(int id) {
    Registro35685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
