// fichero 36809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36809;

Registro36809 crear_registro36809(int id) {
    Registro36809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
