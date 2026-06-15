// fichero 35809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35809;

Registro35809 crear_registro35809(int id) {
    Registro35809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
