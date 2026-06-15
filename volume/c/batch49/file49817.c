// fichero 49817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49817;

Registro49817 crear_registro49817(int id) {
    Registro49817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
