// fichero 49809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49809;

Registro49809 crear_registro49809(int id) {
    Registro49809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
