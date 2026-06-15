// fichero 17817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17817;

Registro17817 crear_registro17817(int id) {
    Registro17817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
