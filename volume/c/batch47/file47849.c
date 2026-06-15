// fichero 47849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47849;

Registro47849 crear_registro47849(int id) {
    Registro47849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
