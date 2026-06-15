// fichero 35777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35777;

Registro35777 crear_registro35777(int id) {
    Registro35777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
