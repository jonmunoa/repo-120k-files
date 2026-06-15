// fichero 35109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35109;

Registro35109 crear_registro35109(int id) {
    Registro35109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
