// fichero 35085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35085;

Registro35085 crear_registro35085(int id) {
    Registro35085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
