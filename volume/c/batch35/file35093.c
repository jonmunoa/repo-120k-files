// fichero 35093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35093;

Registro35093 crear_registro35093(int id) {
    Registro35093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
