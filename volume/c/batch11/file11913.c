// fichero 11913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11913;

Registro11913 crear_registro11913(int id) {
    Registro11913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
