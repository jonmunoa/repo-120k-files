// fichero 11781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11781;

Registro11781 crear_registro11781(int id) {
    Registro11781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
