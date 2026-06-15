// fichero 11429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11429;

Registro11429 crear_registro11429(int id) {
    Registro11429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
