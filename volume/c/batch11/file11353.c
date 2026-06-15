// fichero 11353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11353;

Registro11353 crear_registro11353(int id) {
    Registro11353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
