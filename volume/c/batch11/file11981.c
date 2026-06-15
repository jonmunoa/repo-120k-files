// fichero 11981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11981;

Registro11981 crear_registro11981(int id) {
    Registro11981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
