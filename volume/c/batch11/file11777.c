// fichero 11777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11777;

Registro11777 crear_registro11777(int id) {
    Registro11777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
