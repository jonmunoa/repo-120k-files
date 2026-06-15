// fichero 49753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49753;

Registro49753 crear_registro49753(int id) {
    Registro49753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
