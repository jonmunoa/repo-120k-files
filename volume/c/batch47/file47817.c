// fichero 47817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47817;

Registro47817 crear_registro47817(int id) {
    Registro47817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
