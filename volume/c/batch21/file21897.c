// fichero 21897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21897;

Registro21897 crear_registro21897(int id) {
    Registro21897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
